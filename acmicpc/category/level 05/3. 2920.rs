use std::io;

fn main() {
    let mut input = String::new();
    let asc = vec![1,2,3,4,5,6,7,8];
    let desc = vec![8,7,6,5,4,3,2,1];
    let mut number = vec![];

    io::stdin().read_line(&mut input).unwrap();

    for i in input.split_whitespace() {
        number.push(i.parse::<i32>().unwrap());
    }
    
    if asc == number {
        println!("ascending");
    }
    else if desc == number {
        println!("descending");
    }
    else {
        println!("mixed");
    }
}