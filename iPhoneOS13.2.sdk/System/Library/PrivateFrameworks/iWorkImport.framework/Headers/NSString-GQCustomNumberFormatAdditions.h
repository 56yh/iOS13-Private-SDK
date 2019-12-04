//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSString (GQCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned int)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)sfu_numberSymbols;
+ (id)tsu_numberSymbols;
+ (id)tsu_JSONStringFromString:(id)arg1;
+ (id)tsu_stringByHexEncodingData:(id)arg1;
+ (id)tsu_stringWithXMLString:(const char *)arg1;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(_Bool)arg3;
+ (id)tsu_stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)tsu_stringByIndentingString:(id)arg1;
+ (id)tsu_stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)tsu_stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringWithUUID;
+ (id)tsu_localizedDisplayNameWithPersonNameComponents:(id)arg1;
+ (id)tsu_fogFilenameFromShareToken:(id)arg1;
+ (id)tsu_fogShareTokenFromFileURL:(id)arg1;
+ (id)tsu_unRedactedStringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_redactedStringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)tsu_stringWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
+ (id)tsu_customNumberFormatDecimalFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2 includeDecimalSeparator:(_Bool)arg3;
+ (id)tsu_customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerFormatStringWithDigits:(unsigned long long)arg1 digitString:(id)arg2;
+ (id)tsu_customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3;
+ (id)tsu_customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned long long)arg1 separator:(_Bool)arg2 digitString:(id)arg3 locale:(id)arg4;
+ (id)tsu_customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
+ (id)tsp_stringWithProtobufString:(const basic_string_23d93216 *)arg1;
+ (id)tsa_durationStringFromTimeInterval:(double)arg1;
+ (id)tsk_regexStringForSearchString:(id)arg1 options:(unsigned long long)arg2;
+ (id)tsk_normalizedDisplayName:(id)arg1;
+ (id)tswp_stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(_Bool)arg3;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withListNumberFormat:(int)arg2;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)digitPlaceholderStringInDigitToken;
- (unsigned int)numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)stringByInsertingGroupingSeparators;
- (_Bool)customFormatIntegerTokenUsesSeparator;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (_Bool)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (_Bool)isSpecialCustomNumberFormatToken;
- (id)sfu_prefixOfNumberFormatSubpattern;
- (int)sfu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)sfu_suffixOfNumberFormatSubpattern;
- (int)sfu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)sfu_numberPortionOfNumberFormatSubpattern;
- (id)sfu_negativeSubpatternOfNumberFormatPattern;
- (id)sfu_positiveSubpatternOfNumberFormatPattern;
- (int)sfu_indexOfNumberFormatSubpatternSeparator;
- (id)sfu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)sfu_createRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)sfu_isNumberFormatPattern;
- (id)sfu_createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
- (id)tsce_stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;
- (id)tsce_referenceComponentsSeparatedBySpace;
- (id)tsce_referenceComponentsSeparatedByColon;
- (id)ptsce_referenceComponentsSeparatedByCharacterInSet:(id)arg1;
- (id)tsce_referenceComponentsSeparatedByPathDelimiter;
- (id)tsce_stringByRemovingNewlines;
- (id)tsce_stringByReplacingTabsAndNewlinesWithASingleSpace;
- (id)tsce_newStringByAddingDoubleQuoteEscapesIfNecessary;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1 preserveTrailingUnquotedWhitespace:(_Bool)arg2;
- (id)tsce_stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1;
- (id)tsce_stringByUnescapingPartialQuotedString;
- (_Bool)tsce_isSingleQuoted;
- (id)tsce_stringByUnescapingSingleQuotes;
- (id)tsce_stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned long long *)arg1;
- (id)tsce_newStringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (id)tsce_stringByAddingSingleQuoteEscapesIfNecessary;
- (id)tsce_stringByAddingSingleQuoteEscapes;
- (id)tsce_newStringByForcingSingleQuoteEscapes:(_Bool)arg1;
- (_Bool)tsce_needsReferenceSingleQuoteEscaping;
- (void)tsce_p_initializeQuotes;
- (_Bool)tsce_hasCaseInsensitivePrefix:(id)arg1 withLocale:(id)arg2;
- (long long)tsce_numericCompare:(id)arg1;
- (id)tsu_stringByReplacing2DigitYearStringWith4DigitYearString;
- (id)tsu_stringByReplacing4DigitYearStringWith2DigitYearString;
- (id)tsu_prefixOfNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
- (id)tsu_suffixOfNumberFormatSubpattern;
- (unsigned long long)tsu_indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
- (id)tsu_numberPortionOfNumberFormatSubpattern;
- (id)tsu_negativeSubpatternOfNumberFormatPattern;
- (id)tsu_positiveSubpatternOfNumberFormatPattern;
- (unsigned long long)tsu_indexOfNumberFormatSubpatternSeparator;
- (id)tsu_stringByRemovingEscapedCharactersFromNumberFormatPattern;
- (id)tsu_newRangesOfEscapedCharactersInNumberFormatPattern;
- (_Bool)tsu_isNumberFormatPattern;
- (void)tsu_appendJSONStringToString:(id)arg1;
- (id)tsu_stringWithNormalizedQuotationMarks;
- (id)tsu_stringWithNormalizedHyphens;
- (id)tsu_stringWithNormalizedHyphensAndQuotationMarks;
- (_Bool)tsu_isEqualToString:(id)arg1;
- (id)tsu_middleTruncateToLength:(unsigned long long)arg1;
- (id)tsu_stringWithoutAttachmentCharacters;
- (id)tsu_setOfContainedWordsIncludingPunctuationAndSymbols:(_Bool)arg1;
- (_Bool)tsu_containsSubstring:(id)arg1;
- (void)tsu_enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(id /* block */)arg2;
- (struct _NSRange)tsu_range;
- (struct _NSRange)tsu_rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)tsu_tolerantStringByAppendingPathExtension:(id)arg1;
- (id)tsu_stringByDeletingPathExtensionIfEqualTo:(id)arg1;
- (_Bool)tsu_containsOnlyCharactersFromSet:(id)arg1;
- (id)tsu_unescapeXML;
- (id)tsu_escapeXML;
- (id)tsu_stringTrimByLimitingFirstCharacterToSet:(id)arg1;
- (id)tsu_stringByMakingFirstCharacterUppercase;
- (id)tsu_stringByMakingFirstCharacterLowercase;
- (id)tsu_encodeStringBase64;
- (id)tsu_stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)tsu_stringWithPathRelativeTo:(id)arg1 allowBacktracking:(_Bool)arg2;
- (id)tsu_stringWithPathRelativeTo:(id)arg1;
- (id)tsu_substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)tsu_substringWithComposedCharacterSequencesTruncatedToLength:(unsigned long long)arg1;
- (id)tsu_stringWithRealpath;
- (_Bool)tsu_isChildOfPath:(id)arg1;
- (_Bool)tsu_isDescendantOfPath:(id)arg1;
- (id)tsu_escapeForIcuRegex;
- (unsigned long long)tsu_countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)tsu_stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1;
- (id)tsu_stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)tsu_md5Hash;
- (void)tsu_getMD5Hash:(char *)arg1;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)tsu_stringByUniquingPathInsideDirectory:(id)arg1;
- (id)tsu_stringByAddingCSVEscapesForLocale:(id)arg1;
- (id)tsu_stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)tsu_stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)tsu_stringByExpandingTableFormatting;
- (id)tsu_pathExceptPrivate;
- (_Bool)tsu_isLegalEmailAddress;
- (id)tsu_uncommentedAddressRespectingGroups;
- (id)tsu_uncommentedAddress;
- (_Bool)tsu_isCJKString;
- (id)tsu_sha256HexHashString;
- (long long)tsu_compareToVersionString:(id)arg1;
- (unsigned long long)tsu_numberOfKeysInKeyPath;
- (id)tsu_lastKey;
- (id)tsu_firstKey;
- (id)tsu_keyPathByAppendingKey:(id)arg1;
- (id)tsu_keyPathByPrependingKey:(id)arg1;
- (id)tsu_keyPathByRemovingFirstKey;
- (id)tsu_keyPathByRemovingLastKey;
- (id)tsu_initUnRedactedWithFormat:(id)arg1;
- (id)tsu_initRedactedWithFormat:(id)arg1;
- (id)tsu_initUnRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)tsu_initRedactedWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (_Bool)tsu_bindToSqlStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2 error:(id *)arg3;
- (id)tsu_initWithSqlStatement:(struct sqlite3_stmt *)arg1 columnIndex:(int)arg2;
- (unsigned short)tsu_spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)tsu_scaleCharacterInCustomNumberFormatScaleToken;
- (id)tsu_formatStringFromCustomNumberFormatScaleToken;
- (int)tsu_fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)tsu_currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)tsu_digitPlaceholderStringInDigitToken;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)tsu_stringByInsertingFormatGroupingSeparators:(id)arg1;
- (_Bool)tsu_customFormatIntegerTokenUsesSeparator;
- (unsigned long long)tsu_numberOfDigitsInCustomNumberFormatIntegerToken;
- (_Bool)tsu_isSpecialCustomNumberFormatTokenOfType:(int)arg1;
- (_Bool)tsu_isSpecialCustomNumberFormatToken;
- (_Bool)tsu_pathExtensionConformsToUTI:(id)arg1;
- (_Bool)tsu_pathConformsToUTI:(id)arg1;
@property(readonly, nonatomic) NSString *tsu_pathUTI;
@property(readonly, nonatomic) NSString *tsu_UTIFilenameExtension;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;
- (_Bool)tsu_conformsToUTI:(id)arg1;
- (void)tsp_saveToProtobufString:(basic_string_23d93216 *)arg1;
- (const char *)tsp_protobufString;
- (id)tsp_initWithProtobufString:(const basic_string_23d93216 *)arg1;
- (id)tsp_stringByAppendingObjectPathComponent:(id)arg1;
@property(readonly, nonatomic) _Bool tsp_isPasteboardStateType;
@property(readonly, nonatomic) _Bool tsa_conformsToNativeUTI;
- (id)tsa_nameByConvertingFirstNameToInitials;
- (id)tsa_initialsWithLimit:(unsigned long long)arg1;
- (id)tsa_displayNameFromFilenameDeletingPathExtension:(_Bool)arg1;
- (id)tsa_displayNameFromFilename;
- (id)tsa_filenameTruncatedToCharacterLimit:(unsigned long long)arg1;
- (id)tsa_filenameFromDisplayNameWithExtension:(id)arg1 characterLimit:(unsigned long long)arg2;
- (id)tsa_filenameFromDisplayNameWithExtension:(id)arg1;
- (void)tsch_saveToProtobufString:(basic_string_23d93216 *)arg1;
- (id)tsk_stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 searchOptions:(unsigned long long)arg3 range:(struct _NSRange)arg4 replacementCount:(unsigned long long *)arg5;
- (id)tsk_stringByCapitalizingToMatchString:(id)arg1 range:(struct _NSRange)arg2 searchOptions:(unsigned long long)arg3;
- (struct _NSRange)tsk_rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)tsk_URLByPercentEncoding;
- (id)tst_cleanForFormulaEditor;
- (_Bool)tst_hasLeadingCharacterInSet:(id)arg1;
- (_Bool)tst_isOneCharacterInSet:(id)arg1;
- (_Bool)tst_hasLeadingSingleQuoteEscape;
- (_Bool)tst_isEqualToFormulaEqualsString;
- (_Bool)tst_hasFormulaEqualsPrefix;
- (id)tswp_stringWithoutControlCharacters;
- (id)tswp_stringWithUnambiguousNeutralEnding;
- (id)tswp_stringWithAddedIsolatesBasedOn:(int)arg1;
- (_Bool)tswp_isLowerCaseFromIndex:(unsigned long long)arg1;
- (_Bool)tswp_containsIdeographs;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1 planeClassification:(long long *)arg2;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1;
- (int)tswp_contentsScriptInRange:(struct _NSRange)arg1;
- (int)tswp_contentsScript;
- (id)tswp_replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (_Bool)tswp_isAllWhitespaceInRange:(struct _NSRange)arg1;
- (_Bool)tswp_isHyphenationAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(_Bool)arg3 includeHyphenation:(_Bool)arg4;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(_Bool)arg3;
- (struct _NSRange)tswp_rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)tswp_findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (id)tswp_stringByNormalizingParagraphBreaks;
@end

