//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSLocale, NSLock, NSMutableArray, NSMutableDictionary, NSString, NSTimeZone, TSUDateParserLibrary, TSULocaleStructuredDictionary;

__attribute__((visibility("hidden")))
@interface TSULocale : NSObject
{
    NSLocale *_locale;
    NSLocale *_gregorianCalendarLocale;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_documentLanguageIdentifier;
    _Bool _isAutoUpdating;
    TSULocaleStructuredDictionary *_harmonizedNumberFormatterSymbols;
    NSMutableDictionary *_currencyCodeToSymbolMap;
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;
    struct os_unfair_lock_s _currencySymbolToCodeLock;
    NSMutableDictionary *_currencySymbolToCodeCache;
    NSString *_currencyCode;
    NSString *_decimalSeparator;
    NSString *_currencyDecimalSeparator;
    NSString *_groupingSeparator;
    NSString *_currencyGroupingSeparator;
    NSString *_listSeparator;
    NSString *_percentSymbol;
    NSString *_minusSign;
    NSString *_plusSign;
    long long _dateComponentOrdering;
    NSArray *_monthSymbols;
    NSArray *_standaloneMonthSymbols;
    NSArray *_weekdaySymbols;
    NSArray *_standaloneWeekdaySymbols;
    NSArray *_shortMonthSymbols;
    NSArray *_shortStandaloneMonthSymbols;
    NSArray *_shortWeekdaySymbols;
    NSArray *_shortStandaloneWeekdaySymbols;
    struct TSUNumberOrDateLexer _numberOrDateLexer;
    struct _opaque_pthread_mutex_t _formattersMutex;
    NSMutableArray *_numberFormatters;
    NSMutableArray *_scientificNumberFormatters;
    TSUDateParserLibrary *_dateParserLibrary;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    struct __CFNumberFormatter *_plainFormatter;
    struct __CFNumberFormatter *_noMinusSignPlainFormatter;
    struct __CFNumberFormatter *_currencyFormatter;
    struct __CFNumberFormatter *_noMinusSignCurrencyFormatter;
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    unsigned long long _groupingSize;
    unsigned long long _secondaryGroupingSize;
    NSLock *_localeSpecificStorageLock;
    NSMutableDictionary *_localeSpecificStorage;
    NSCache *_cachedLocalizedStrings;
    NSString *_trueString;
    NSString *_falseString;
    NSString *_amString;
    NSString *_pmString;
}

+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)userVisibleCurrencyCodes;
+ (id)availableCurrencyCodes;
+ (id)currentLocaleCurrencyCode;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (void)saveLocaleForReuse:(id)arg1;
+ (id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2;
+ (_Bool)localeIsAutoUpdating:(id)arg1;
+ (id)allSupportedTemplatePickerLanguages;
+ (id)allSupportedTier3Languages;
+ (id)allSupportedTier1Languages;
+ (id)displayNameForCode:(id)arg1 ofType:(id)arg2 displayStandalone:(_Bool)arg3;
+ (id)simplifiedDisplayNameForLocaleID:(id)arg1 displayStandalone:(_Bool)arg2;
+ (id)localeIDWithoutDefaultRegionCode:(id)arg1 avoidAmbiguousCases:(_Bool)arg2;
+ (id)localeIDWithDefaultRegionCode:(id)arg1;
+ (id)deducedScriptForLocale:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifier:(id)arg1;
+ (id)applicationLocale;
+ (id)preferredLocale;
+ (id)currentLocale;
+ (id)preferredLanguages;
+ (id)cacheKeyForLocale:(id)arg1;
+ (unsigned long long)autoupdatingCurrentLocaleChangeCount;
+ (void)setLocalizedStringBundle:(struct __CFBundle *)arg1;
+ (void)initialize;
@property(readonly) NSString *pmString; // @synthesize pmString=_pmString;
@property(readonly) NSString *amString; // @synthesize amString=_amString;
@property(readonly) TSUDateParserLibrary *dateParserLibrary; // @synthesize dateParserLibrary=_dateParserLibrary;
@property(readonly) NSString *falseString; // @synthesize falseString=_falseString;
@property(readonly) NSString *trueString; // @synthesize trueString=_trueString;
@property(readonly) NSArray *shortStandaloneWeekdaySymbols; // @synthesize shortStandaloneWeekdaySymbols=_shortStandaloneWeekdaySymbols;
@property(readonly) NSArray *shortWeekdaySymbols; // @synthesize shortWeekdaySymbols=_shortWeekdaySymbols;
@property(readonly) NSArray *shortStandaloneMonthSymbols; // @synthesize shortStandaloneMonthSymbols=_shortStandaloneMonthSymbols;
@property(readonly) NSArray *shortMonthSymbols; // @synthesize shortMonthSymbols=_shortMonthSymbols;
@property(readonly) NSArray *standaloneWeekdaySymbols; // @synthesize standaloneWeekdaySymbols=_standaloneWeekdaySymbols;
@property(readonly) NSArray *weekdaySymbols; // @synthesize weekdaySymbols=_weekdaySymbols;
@property(readonly) NSArray *standaloneMonthSymbols; // @synthesize standaloneMonthSymbols=_standaloneMonthSymbols;
@property(readonly) NSArray *monthSymbols; // @synthesize monthSymbols=_monthSymbols;
@property(readonly) long long dateComponentOrdering; // @synthesize dateComponentOrdering=_dateComponentOrdering;
@property(readonly) NSLocale *gregorianCalendarLocale; // @synthesize gregorianCalendarLocale=_gregorianCalendarLocale;
@property(readonly) NSString *plusSign; // @synthesize plusSign=_plusSign;
@property(readonly) NSString *minusSign; // @synthesize minusSign=_minusSign;
@property(readonly) NSString *percentSymbol; // @synthesize percentSymbol=_percentSymbol;
@property(readonly) unsigned long long secondaryGroupingSize; // @synthesize secondaryGroupingSize=_secondaryGroupingSize;
@property(readonly) unsigned long long groupingSize; // @synthesize groupingSize=_groupingSize;
@property(readonly) NSString *listSeparator; // @synthesize listSeparator=_listSeparator;
@property(readonly) NSString *currencyGroupingSeparator; // @synthesize currencyGroupingSeparator=_currencyGroupingSeparator;
@property(readonly) NSString *groupingSeparator; // @synthesize groupingSeparator=_groupingSeparator;
@property(readonly) NSString *currencyDecimalSeparator; // @synthesize currencyDecimalSeparator=_currencyDecimalSeparator;
@property(readonly) NSString *decimalSeparator; // @synthesize decimalSeparator=_decimalSeparator;
@property(readonly) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly) _Bool isAutoUpdating; // @synthesize isAutoUpdating=_isAutoUpdating;
@property(readonly) NSString *documentLanguageIdentifier; // @synthesize documentLanguageIdentifier=_documentLanguageIdentifier;
@property(readonly) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly) NSLocale *locale; // @synthesize locale=_locale;
- (id).cxx_construct;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(struct __CFBundle *)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
@property(readonly) NSTimeZone *timeZone;
- (_Bool)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2;
- (long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2;
- (long long)localizedCompare:(id)arg1 toString:(id)arg2;
- (id)localizedStringWithFormat:(id)arg1;
- (void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2;
- (id)localeSpecificStorageForKey:(id)arg1;
- (id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(_Bool)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(_Bool)arg6 currencyCode:(id)arg7 suppressMinusSign:(_Bool)arg8;
- (void)_initializeNumberFormatterStringFromDoubleCache;
- (void)returnScientificNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutScientificNumberFormatter;
- (void)returnNumberFormatter:(struct __CFNumberFormatter *)arg1;
- (struct __CFNumberFormatter *)checkoutNumberFormatter;
@property(readonly, nonatomic) const struct TSUNumberOrDateLexer *numberOrDateLexer;
- (id)displayNameForCurrencyCode:(id)arg1;
- (id)currencyCodeForCurrencySymbol:(id)arg1;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)currencySymbolForCurrencyCode:(id)arg1;
@property(readonly) NSString *arrayRowSeparator;
@property(readonly) struct __CFLocale *cfGregorianCalendarLocale;
@property(readonly) struct __CFLocale *cfLocale;
- (id)displayLanguageNameWithStandalone:(_Bool)arg1;
- (id)simplifiedDisplayNameWithStandalone:(_Bool)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithDocumentLanguageIdentifier:(id)arg1;
- (id)localeIdentifierWithLanguageScriptAndRegionOnly;
- (id)localeIdentifierWithLanguageAndRegionOnly;
- (id)languageIdentifierWithLanguageAndRegionOnly;
- (void)resetFromCFNumberFormatter;
- (struct __CFNumberFormatter *)createHarmonizedCFNumberFormatterOfStyle:(long long)arg1;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 useAutoupdating:(_Bool)arg3;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2;
- (id)localizedLabelForAggType:(unsigned char)arg1;
- (id)allLocalizedFunctions;
- (id)localizedCategoryArray;
- (id)localizedFunctionCategoryDictionary;
- (id)localizedNamesForFunctions:(id)arg1;
- (id)localizedFalseStrings;
- (id)localizedTrueStrings;
- (void)loadLocalizedStrings;
- (id)_localizedStringFromArgumentsTable:(id)arg1;
- (id)localizedModeToolTipForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;
- (id)localizedModeNameForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;
- (id)localizedToolTipForArgument:(short)arg1 ofFunction:(id)arg2;
- (id)localizedNameForArgument:(short)arg1 ofFunction:(id)arg2;
- (id)localizedCategoryForFunction:(id)arg1;
- (id)localizedToolTipForFunction:(id)arg1;
- (id)localizedNameForFunction:(id)arg1;
- (id)localizedFunctionNameForMenuTag:(int)arg1;
- (id)localizedFalseString;
- (_Bool)localizedStringIsFalse:(id)arg1;
- (id)localizedTrueString;
- (_Bool)localizedStringIsTrue:(id)arg1;
- (id)localizedTypeStringForArgumentType:(int)arg1;
- (id)supportedFunctions;
- (id)functionNameForLocalizedString:(id)arg1;
- (id)functionLocalizationDictionary;

@end

