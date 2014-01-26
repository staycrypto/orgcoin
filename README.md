Orgcoin integration/staging tree
================================

http://www.orgcoin.org

Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2011-2013 Litecoin Developers
Copyright (c) 2014 The Orgcoin Foundation

What is Orgcoin?
----------------
Orgcoin is a new crypto-currency derived from the best ideas of Bitcoin, Litecoin & Devcoin.
The core of Orgcoin is directly forked from United Scrypt Coin, Orgcoin is designed to be merge mined with Litecoin
Orgcoin gives anyone the ability to donate to their favorite good cause.
Each month 100% of the profits of the Orgcoin Foundation are donated to a good cause voted upon by our members.
Additionally any non-profit, charity or other good cause may recieve donations directly to their wallet.

Orgcoin features

-10 second block targets
-100 coin subsidy (remains flat, never changes)
-Unlimited total coins
-90/10 split in favor of the miners (90 coins from each block goes to the miner who discovers it, 10 coins go to the foundation)
-1 hr difficulty retargets

For more info go to www.orgcoin.org

How to mine?
---------------
For best results mining of Orgcoin should be done against a pool that supports it.
pool.orgcoin.org is one such pool.

For those who do not wish to merge mine, simply build an orgcoin wallet, and edit the orgcoin.conf file adding
setgenerate=true

While you're in there also set the RPC settings.

Then point cgminer or some other mining application to it, making sure to enable scrypt

./cgminer --scrypt -O your.ip:port -u username -p password

If you have difficulties please see the mining topic at orgcoin.org
http://www.orgcoin.org/category/14/mining

What is Litecoin?
----------------

Litecoin is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.
 - 2.5 minute block targets
 - subsidy halves in 840k blocks (~4 years)
 - ~84 million total coins

The rest is the same as Bitcoin.
 - 50 coins per block
 - 2016 blocks to retarget difficulty

For more information, as well as an immediately useable, binary version of
the Litecoin client sofware, see http://www.litecoin.org.

License
-------

Litecoin is released under the terms of the MIT license.
