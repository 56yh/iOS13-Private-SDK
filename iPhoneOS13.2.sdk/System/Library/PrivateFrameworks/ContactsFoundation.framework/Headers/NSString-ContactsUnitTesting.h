//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSString (ContactsUnitTesting)
+ (id)_cn_stringByRepeatingCharacter:(BOOL)arg1 length:(unsigned long long)arg2;
+ (_Bool)_cn_isBlank:(id)arg1;
+ (id)_cn_whitespaceExceptAscii32CharacterSet;
+ (id)_cn_LTRControlCharacters;
+ (id)_cn_phoneNumberInvalidCharacters;
- (id)_cn_stringByReplacingStrings:(id)arg1;
- (id)_cn_flatMap:(id /* block */)arg1;
- (id)_cn_resultWithAllCharacters:(id /* block */)arg1;
- (id)_cn_truncateAtLength:(unsigned long long)arg1 addEllipsisIfTrunctated:(_Bool)arg2;
- (id)_cn_take:(unsigned long long)arg1;
- (void)_cn_eachCharacter:(id /* block */)arg1;
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;
- (id)_cn_nameComponentTokens;
- (id)_cn_tokens;
- (id)_cn_trimmedString;
- (id)_cn_stringByNormalizingCase;
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;
- (id)_cn_stringByAddingPercentEscapesToEntireURL;
- (id)_cn_stringByAddingPercentEscapesIfNecessary;
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1;
- (_Bool)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_containsSubstring:(id)arg1;
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;
- (_Bool)_cn_containsCharacterInSet:(id)arg1;
- (_Bool)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_hasSuffix:(id)arg1;
- (_Bool)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_cn_hasPrefix:(id)arg1;
- (_Bool)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;
- (_Bool)_cn_caseInsensitiveIsEqual:(id)arg1;
- (_Bool)_cn_isBlank;
@property(readonly) _Bool _cn_requiresPhoneNumberSanitizing;
- (id)_cn_stringByNormalizingWhitespace;
- (id)_cn_stringBySanitizingPhoneNumber;
@end

