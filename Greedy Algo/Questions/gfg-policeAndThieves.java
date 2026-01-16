class Solution {
    public int catchThieves(char[] arr, int k) {
        // code here
        ArrayList<Integer> police = new ArrayList <>();
        ArrayList<Integer> thief = new ArrayList <>();
        
        for(int i=0; i< arr.length; i++){
            if(arr[i] == 'P'){
                police.add(i);
            }
            else if(arr[i] == 'T'){
                thief.add(i);
            }
        }

        // `i` and `j` are the pointers to track in the `police` and `thief` list
        int i=0;
        int j=0;
        int count=0;
        
        // iterate until one of the pointer reach till the end
        while(i < police.size() && j < thief.size()){
            // if the difference of police from the thief is less than the k
            // then we can catch the theif 
            // and increase the count
            // and both the pointers
            if(Math.abs(police.get(i) - thief.get(j)) <= k){
                count++;
                i++;
                j++;
            }
            // and if the diff of police from the thief is > than k
            // then we check how much far away theif is from the police
            // if the position of police is less than thief means 
            //     - police is far away from theif so 
            //     - if the police cann't catch this thief so it cann't catch any other theif in the right
            //     - so we skip that police
            //     - that's why we increment `i` pointer
            else if(police.get(i) < thief.get(j)){
                i++;
            }
            // and if the position of police is greater than the theif
            // means he can not be caught by any other police so 
            // we skip that theif
            // that's why here we incremented `j` pointer
            else{
                j++;
            }
        }
        
        return count;
    }
}