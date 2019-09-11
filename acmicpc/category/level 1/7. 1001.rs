use std::io;

fn main() 
{
    let mut a = String::new();

    io::stdin().read_line(&mut a).unwrap();

    let values:Vec<i32> = a
        .as_mut_str()
        .split_whitespace()
        .map(|a| a.parse().unwrap())
        .collect();

    println!("{}", values[0] - values[1]);
}