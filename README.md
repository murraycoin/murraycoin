# Murraycoin [MRY]
==========================

"There are two types of people in this world: Those who like Neil Diamond, and those who don't. My ex-wife loves him."
					--Bob Wiley (Bill Murray), What About Bob?

![Murraycoin](https://23e581f9788c7942a462-826b8b60bdcccd5086d5eab06549f695.ssl.cf2.rackcdn.com/images/logo_big.png)

## What is Murraycoin?
Murraycoin is a cryptocurrency like Bitcoin, although it does not use SHA256 as its proof of work (PoW). Taking development cues from Tenebrix and Litecoin, Murraycoin currently employs a simplified variant of scrypt. However, on July 4th 2014, Murraycoin will automatically switch to a GPU/CPU-optimized and (currently) ASIC-incompatible Scrypt-2048 algorithm for PoW which is more memory intensive than standard scrypt. While other coins have adopted Scrypt-N to automatically adapt to advancing technology, Murraycoin opted to use Scrypt-2048 instead to ensure consistent and stable results with no surprises and a wider range of compatibility with consumer hardware down the line. Also, Scrypt-4096 ASIC miners are automatically in development and will likely begin shipping shortly into the Scrypt-N switch to Scrypt-4096 - Scrypt-2048 is the sweet spot that many Scrypt-N coins will likely end up having to create forks to adopt down the road. Also: Bill Murray.

https://www.murraycoin.org/

## License
Murraycoin is released under the terms of the MIT license. See [COPYING](COPYING)
for more information or see http://opensource.org/licenses/MIT.

## Development and contributions
Development is ongoing and the development team as well as other volunteers can freely work in their own trees and submit pull requests when features or bug fixes are ready.

#### Version strategy
Version numbers are following ```major.minor.patch``` semantics.

#### Branches
There are 3 types of branches in this repository:

- **master:** Stable, contains the latest version of the latest *major.minor* release.
- **maintenance:** Stable, contains the latest version of previous releases, which are still under active maintenance. Format: ```<version>-maint```
- **development:** Unstable, contains new code for planned releases. Format: ```<version>-dev```

*Master and maintenance branches are exclusively mutable by release. Planned releases will always have a development branch and pull requests should be submitted against those. Maintenance branches are there for* ***bug fixes only,*** *please submit new features against the development branch with the highest version.*

### Ports
RPC 11950
P2P 11951