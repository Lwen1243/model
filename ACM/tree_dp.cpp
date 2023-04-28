void dfs(int u)
{
    vis[u] = 1 ;
    for(auto v:son[u])
    {
        if(vis[v] == 1) continue ;
        dfs(v) ;
        dp[u][1] += dp[v][0] ;
        dp[u][0] += max(dp[v][0], dp[v][1]) ;
    }
    return ;
}
