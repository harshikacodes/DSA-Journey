class Solution {
    public int activitySelection(int[] start, int[] finish) {
        // here i created a Activity class array
        // for storing activities in pairs
        // it's like 2D
        // on the 0th index I have two values - start and finish
        Activity[] a = new Activity[start.length];
        
        // on every index I am creating a new object of Activity class
        for(int i=0; i<start.length; i++){
            a[i] = new Activity(start[i], finish[i]);
        }
        
        // here I am sorting my activity array on the basis of finish time
        // which ever activiy finishes earliest I will consider that.
        Arrays.sort(a, (x, y) -> x.finish - y.finish);
        
        int count = 1; // we always select the first activity
        // because nothing before it
        int lastFinish = a[0].finish;
        
        // selecting the activity with the earliest finish time 
        // leaves maximum room for future activities...
        for(int i=1; i<a.length; i++){
            if(a[i].start > lastFinish){
                count++;
                lastFinish = a[i].finish;
            }
        }
        
        return count;
        
    }
    
    // for pairing start time and end time of the activity I use a class to pair both the timing
    class Activity{
        int start;
        int finish;
        
        Activity(int start, int finish){
            this.start = start;
            this.finish = finish;
        }
    }
}
