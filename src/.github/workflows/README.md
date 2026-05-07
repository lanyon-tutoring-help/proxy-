# 🚀 curl-wg-proxy

HTTP Proxy → WireGuard Tunnel

## Quick Start
```bash
docker build -t proxy .
docker run -p 8080:8080 proxy
curl -x http://localhost:8080 https://ifconfig.me
