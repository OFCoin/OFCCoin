OFCCoin version 0.6.0 is now available for download at:
http://sourceforge.net/projects/OFCCoin/files/OFCCoin/OFCCoin-0.6.0/test/

This release includes more than 20 language localizations.
More translations are welcome; join the
project at Transifex to help:
https://www.transifex.net/projects/p/OFCCoin/

Please report bugs using the issue tracker at github:
https://github.com/OFCCoin/OFCCoin/issues

Project source code is hosted at github; we are no longer
distributing .tar.gz files here, you can get them
directly from github:
https://github.com/OFCCoin/OFCCoin/tarball/v0.6.0  # .tar.gz
https://github.com/OFCCoin/OFCCoin/zipball/v0.6.0  # .zip

For Ubuntu users, there is a ppa maintained by Matt Corallo which
you can add to your system so that it will automatically keep
OFCCoin up-to-date.  Just type
sudo apt-add-repository ppa:OFCCoin/OFCCoin
in your terminal, then install the OFCCoin-qt package.


KNOWN ISSUES

Shutting down while synchronizing with the network
(downloading the blockchain) can take more than a minute,
because database writes are queued to speed up download
time.


NEW FEATURES SINCE OFCCoin VERSION 0.5

Initial network synchronization should be much faster
(one or two hours on a typical machine instead of ten or more
hours).

Backup Wallet menu option.

OFCCoin-Qt can display and save QR codes for sending
and receiving addresses.

New context menu on addresses to copy/edit/delete them.

New Sign Message dialog that allows you to prove that you
own a OFCCoin address by creating a digital
signature.

New wallets created with this version will
use 33-byte 'compressed' public keys instead of
65-byte public keys, resulting in smaller
transactions and less traffic on the OFCCoin
network. The shorter keys are already supported
by the network but wallet.dat files containing
short keys are not compatible with earlier
versions of OFCCoin-Qt/OFCCoind.

New command-line argument -blocknotify=<command>
that will spawn a shell process to run <command> 
when a new block is accepted.

New command-line argument -splash=0 to disable
OFCCoin-Qt's initial splash screen

validateaddress JSON-RPC api command output includes
two new fields for addresses in the wallet:
pubkey : hexadecimal public key
iscompressed : true if pubkey is a short 33-byte key

New JSON-RPC api commands for dumping/importing
private keys from the wallet (dumprivkey, importprivkey).

New JSON-RPC api command for getting information about
blocks (getblock, getblockhash).

New JSON-RPC api command (getmininginfo) for getting
extra information related to mining. The getinfo
JSON-RPC command no longer includes mining-related
information (generate/genproclimit/hashespersec).



NOTABLE CHANGES

BIP30 implemented (security fix for an attack involving
duplicate "coinbase transactions").

The -nolisten, -noupnp and -nodnsseed command-line
options were renamed to -listen, -upnp and -dnsseed,
with a default value of 1. The old names are still
supported for compatibility (so specifying -nolisten
is automatically interpreted as -listen=0; every
boolean argument can now be specified as either
-foo or -nofoo).

The -noirc command-line options was renamed to
-irc, with a default value of 0. Run -irc=1 to
get the old behavior.

Three fill-up-available-memory denial-of-service
attacks were fixed.


NOT YET IMPLEMENTED FEATURES

Support for clicking on OFCCoin: URIs and
opening/launching OFCCoin-Qt is available only on Linux,
and only if you configure your desktop to launch
OFCCoin-Qt. All platforms support dragging and dropping
OFCCoin: URIs onto the OFCCoin-Qt window to start
payment.


PRELIMINARY SUPPORT FOR MULTISIGNATURE TRANSACTIONS

This release has preliminary support for multisignature
transactions-- transactions that require authorization
from more than one person or device before they
will be accepted by the OFCCoin network.

Prior to this release, multisignature transactions
were considered 'non-standard' and were ignored;
with this release multisignature transactions are
considered standard and will start to be relayed
and accepted into blocks.

It is expected that future releases of OFCCoin-Qt
will support the creation of multisignature transactions,
once enough of the network has upgraded so relaying
and validating them is robust.

For this release, creation and testing of multisignature
transactions is limited to the OFCCoin test network using
the "addmultisigaddress" JSON-RPC api call.

Short multisignature address support is included in this
release, as specified in BIP 13 and BIP 16.
