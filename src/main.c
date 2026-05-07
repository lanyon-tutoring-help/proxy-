#include "proxy.h"
#include <signal.h>

int main() {
    proxy_ctx ctx = init_proxy("wg.conf");
    start_proxy(&ctx, 8080);
    
    printf("🚀 Proxy running on :8080\n");
    ev_run(ctx.loop, 0);
    return 0;
}
