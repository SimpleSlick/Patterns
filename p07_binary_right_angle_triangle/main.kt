fun main(){
    val n = readln().toInt()

    for(i in 1..n){
        val row = StringBuilder()

        for(j in 1..i){
            if((i + j) % 2 == 0){
                row.append("1")
            }else{
                row.append("0")
            }
        }
        print(row)
    }
}