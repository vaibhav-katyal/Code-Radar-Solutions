int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear){
    int penalty = 0;

    if(subYear>dueYear){
        penalty += 5000;
    }
    else if(subYear == dueYear && dueMonth>subMonth){
        penalty += (subMonth-dueMonth)*200;
    }
    else{
        penalty += (subDay-dueDay)*10;
    }

    return penalty;
}