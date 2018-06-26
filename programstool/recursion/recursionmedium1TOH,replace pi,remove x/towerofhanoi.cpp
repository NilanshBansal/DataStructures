/*
Tower of Hanoi
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :

1) Only one disk can be moved at a time.

2) A disk can only be moved if it on top of a rod.

3) No disk may be placed on top of a smaller disk.

Sample Test Case :

Input : 3

Output : 7

*/
// METHOD 1 DISPLAY NONLY NO OF STEPS

int towerOfHanoi(int n, char source, char auxiliary, char destination) {
     int count=0;
     if(n>0)
   {
    count=towerOfHanoi(n-1,source,destination,auxiliary);
   count++;
    count=count+towerOfHanoi(n-1,auxiliary,source,destination);
   }
   return count;
}

//METHOD 2 COMPLETE PROGRAM

int towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
   int ans=0;
	if(n==1)
	{ //cout<<"Move "<<n<<" st disk from "<<source<<" to "<<dest<<endl;
	  return 1;
	}
	ans = towerOfHanoi(n-1, source, destination, auxiliary);
	ans++;
//	cout<<"Move "<<n<<" th disk from "<<source<<" to "<<dest<<endl;
	ans += towerOfHanoi(n-1, auxiliary, source, destination);

	return ans;
}


