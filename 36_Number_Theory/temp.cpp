bool status[1000000 + 1];

void siv(int N) {
    int sq = sqrt(N);

    for (int i = 4; i <= N; i += 2) {
        status[i] = true;
    }

    for (int i = 3; i*i<=N; i += 2) {
        if (status[i] == 0) {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
        }
    }

    status[1] = 1;
}