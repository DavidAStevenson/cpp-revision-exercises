FROM gcc:8.2 as builder
COPY . /usr/src/stack
WORKDIR /usr/src/stack
RUN g++ -o stack_test -static stack.cc stack_test.cc

FROM alpine:latest
COPY --from=builder /usr/src/stack/stack_test /stack_test
# TODO would be better to not run the app as root...
CMD ["./stack_test"]
