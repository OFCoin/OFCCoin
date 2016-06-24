// Copyright (c) 2011-2014 The OFCCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef OFCCoinADDRESSVALIDATOR_H
#define OFCCoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class OFCCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit OFCCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** OFCCoin address widget validator, checks for a valid OFCCoin address.
 */
class OFCCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit OFCCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // OFCCoinADDRESSVALIDATOR_H
