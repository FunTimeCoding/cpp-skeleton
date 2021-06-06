FROM alpine:3.7 AS development
RUN apk add --update openssh gcc g++ clang gdb cmake make tar rsync python3
RUN rm -rf /tmp/* /var/cache/apk/*

# Conan
RUN apk add --update py3-pip
RUN pip3 install --upgrade pip
RUN pip3 install conan

# SSH
RUN echo root:root | chpasswd
COPY configuration/docker/sshd.txt /etc/sshd_config_clion
RUN ssh-keygen -A

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D", "-f", "/etc/sshd_config_clion"]

FROM alpine:3.7 AS builder
RUN apk add --update gcc g++ clang gdb cmake make tar python3
RUN rm -rf /tmp/* /var/cache/apk/*
COPY . /cpp-skeleton
WORKDIR /cpp-skeleton
RUN script/cpp/build.sh

FROM alpine:3.7 AS production
COPY --from=builder /cpp-skeleton/build/cppsk /usr/local/bin
CMD ["cppsk"]
