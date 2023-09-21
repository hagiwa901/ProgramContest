FROM python:3.6-slim AS OJ
RUN pip3 install online-judge-tools

FROM node:latest AS AC
COPY --from=OJ / /
RUN npm install -g atcoder-cli

FROM gcr.io/distroless/base-debian12:latest
COPY --from=AC / /
CMD ["/bin/bash"]
