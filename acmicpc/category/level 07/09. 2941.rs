use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    
    println!("{}", input.trim().replace("c=", "1").replace("c-", "1").replace("dz=", "1").replace("d-", "1").replace("lj", "1").replace("nj", "1").replace("s=", "1").replace("z=", "1").len());
}