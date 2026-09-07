{
  description = "Nix flake for cpp dev";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = { self , nixpkgs ,... }: let
    system = "x86_64-linux";
  in {
    devShells."${system}".default = let
      pkgs = import nixpkgs { inherit system; };
    in pkgs.mkShell {
      packages = with pkgs; [
	libgcc
	binutils
	gcc
	cmake
	clang-tools
	cppcheck
	codespell
	gnumake
      ];

      shellHook = ''
        echo "loaded `gcc --version`
	for i in pkgs.mkshell
do
echo "$i"
done
"
      '';
    };
  };
}
