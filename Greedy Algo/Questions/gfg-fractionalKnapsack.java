class Solution {
    public double fractionalKnapsack(int[] val, int[] wt, int capacity) {
        // here I created a Items obj array for storing value, weight and it's ratio together
        Items[] item = new Items[val.length];
        
        // here I am storing all the val[] and wt[] ele in the item obj arr
        for(int i=0; i<val.length; i++){
            item[i] = new Items(val[i], wt[i]);
        }
        
        // I sort the item obj arr on the basis on the ratio
        // if we compare a.ratio, b.ratio -> then we get ascending order
        // but we want in descending order
        // because we want more value less weight
        Arrays.sort(item, (a, b) -> Double.compare(b.ratio, a.ratio));
        
        // here I am tracking remaining Capacity and total value that I got.
        int remainingCapacity = capacity;
        double totalValue = 0.0;
        
        // here I iterate on the whole item arr obj
        for(Items i: item){
            if(remainingCapacity == 0){
                break;
            }
            
            // if weight is less than the capacity
            // then we add the value in the totalValue
            // and decrease the capacity
            if(i.weight <= remainingCapacity){
                totalValue += i.value;
                remainingCapacity -= i.weight;
            }
            else{
                // and if weight is greater than the capacity
                // then we divide it by the remainingCapacity by weight
                // and add the fraction part by value to the totalValue
                double fraction = (double) remainingCapacity/i.weight;
                totalValue += fraction * i.value;
                remainingCapacity = 0;
            }
        }
        
        return totalValue;
    }
    
    class Items{
        int value;
        int weight;
        double ratio;
        
        Items(int value, int weight){
            this.value = value;
            this.weight = weight;
            this.ratio = (double) value/weight;
        }
    }
}