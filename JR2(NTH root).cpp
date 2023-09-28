int Solve(int mid , int m , int nums){

    long long ans = 1 ;

    for(int i  = 1 ; i<= m ; i++){

      ans *= mid;

      if(ans > nums){

        return 0;

      }

    }

    return ans == nums ? 1 : -1;

}

 

int NthRoot(int n, int m) {

    int low = 1;

    int high = m;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        int powValue = Solve(mid, n , m);

        if (powValue == 1) {

            return mid;

        } else if (powValue == 0) {

            high = mid - 1;

        } else {

            low = mid + 1;

        }

    }

    return -1;

}
