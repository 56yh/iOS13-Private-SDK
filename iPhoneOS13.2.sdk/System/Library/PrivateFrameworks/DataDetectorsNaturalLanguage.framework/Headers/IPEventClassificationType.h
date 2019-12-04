//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IPEventClassificationType : NSObject
{
    _Bool _movieRelated;
    _Bool _mealRelated;
    _Bool _cultureRelated;
    _Bool _sportRelated;
    _Bool _fairlyGeneric;
    _Bool _isAppointment;
    _Bool _allDayAllowed;
    _Bool _useForTimeAdjustement;
    _Bool _highPriority;
    _Bool _lowPriority;
    int _defaultStartingTimeHour;
    int _defaultStartingTimeMinutes;
    int _defaultCumulativeMinutes;
    NSString *_identifier;
    NSString *_defaultTitle;
    NSString *_titleSenderTemplate;
    double _defaultDuration;
    unsigned long long _preferedMeridian;
    NSString *_language;
    unsigned long long _classificationDepth;
    double _minutesBeforeDefaultStartingTime;
    double _minutesAfterDefaultStartingTime;
    NSMutableArray *_patternKeywords;
    NSMutableArray *_genericPatternKeywords;
    NSMutableArray *_titleKeywords;
    NSMutableArray *_subjectKeywords;
    IPEventClassificationType *_parent;
    NSMutableArray *_children;
    NSMutableDictionary *_upperPriorityEventTypesIdentifiers;
}

+ (id)humanReadableClusterType:(unsigned long long)arg1;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 detectedStartDate:(id)arg2;
+ (id)eventTypeForGenericEventAndLanguageID:(id)arg1;
+ (id)eventTypeForEntertainmentAndLanguageID:(id)arg1;
+ (id)eventTypeForMealsAndLanguageID:(id)arg1;
+ (id)eventTypeForCultureAndLanguageID:(id)arg1;
+ (id)eventTypeForSportAndLanguageID:(id)arg1;
+ (id)eventTypeForMoviesAndLanguageID:(id)arg1;
+ (id)cleanSubject:(id)arg1;
+ (id)morePreciseEventClassificationTypeBetweenType:(id)arg1 and:(id)arg2;
+ (id)_identifiersForClusters:(id)arg1;
+ (id)_identifierForCluster:(unsigned long long)arg1;
+ (id)_parentFromIdentifier:(id)arg1;
+ (id)allClusterIdentifiers;
+ (id)_loadTaxonomyForLanguageID:(id)arg1 clusterIdentifier:(id)arg2 error:(id *)arg3;
+ (id)taxonomyForLanguageID:(id)arg1 clusterIdentifier:(id)arg2;
+ (id)taxonomyForLanguageID:(id)arg1 clusterType:(unsigned long long)arg2;
+ (double)_averageDistanceBetweenFeatureKeyword:(id)arg1 featureDates:(id)arg2 subjectLength:(unsigned long long)arg3 inSubject:(_Bool)arg4;
+ (double)_scoreForKeywordsInSubject:(_Bool)arg1 distanceToDates:(double)arg2 polarity:(unsigned long long)arg3 matchedRatio:(double)arg4 keywordType:(unsigned long long)arg5;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 features:(id)arg2 datafeatures:(id)arg3;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 features:(id)arg2;
+ (id)eventClassificationTypeFromMessageUnit:(id)arg1 keywordFeatures:(id)arg2 datafeatures:(id)arg3;
+ (id)fallbackEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 checkForDateInSubject:(_Bool)arg3;
@property(nonatomic, getter=isLowPriority) _Bool lowPriority; // @synthesize lowPriority=_lowPriority;
@property(nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(retain, nonatomic) NSMutableDictionary *upperPriorityEventTypesIdentifiers; // @synthesize upperPriorityEventTypesIdentifiers=_upperPriorityEventTypesIdentifiers;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) __weak IPEventClassificationType *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSMutableArray *subjectKeywords; // @synthesize subjectKeywords=_subjectKeywords;
@property(retain, nonatomic) NSMutableArray *titleKeywords; // @synthesize titleKeywords=_titleKeywords;
@property(retain, nonatomic) NSMutableArray *genericPatternKeywords; // @synthesize genericPatternKeywords=_genericPatternKeywords;
@property(retain, nonatomic) NSMutableArray *patternKeywords; // @synthesize patternKeywords=_patternKeywords;
@property(nonatomic) double minutesAfterDefaultStartingTime; // @synthesize minutesAfterDefaultStartingTime=_minutesAfterDefaultStartingTime;
@property(nonatomic) double minutesBeforeDefaultStartingTime; // @synthesize minutesBeforeDefaultStartingTime=_minutesBeforeDefaultStartingTime;
@property(nonatomic) _Bool useForTimeAdjustement; // @synthesize useForTimeAdjustement=_useForTimeAdjustement;
@property(nonatomic) int defaultCumulativeMinutes; // @synthesize defaultCumulativeMinutes=_defaultCumulativeMinutes;
@property(nonatomic) unsigned long long classificationDepth; // @synthesize classificationDepth=_classificationDepth;
@property(nonatomic, getter=isAllDayAllowed) _Bool allDayAllowed; // @synthesize allDayAllowed=_allDayAllowed;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned long long preferedMeridian; // @synthesize preferedMeridian=_preferedMeridian;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(nonatomic) int defaultStartingTimeMinutes; // @synthesize defaultStartingTimeMinutes=_defaultStartingTimeMinutes;
@property(nonatomic) int defaultStartingTimeHour; // @synthesize defaultStartingTimeHour=_defaultStartingTimeHour;
@property(retain, nonatomic) NSString *titleSenderTemplate; // @synthesize titleSenderTemplate=_titleSenderTemplate;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isAppointment) _Bool isAppointment; // @synthesize isAppointment=_isAppointment;
@property(readonly, nonatomic, getter=isFairlyGeneric) _Bool fairlyGeneric; // @synthesize fairlyGeneric=_fairlyGeneric;
@property(readonly, nonatomic, getter=isSportRelated) _Bool sportRelated; // @synthesize sportRelated=_sportRelated;
@property(readonly, nonatomic, getter=isCultureRelated) _Bool cultureRelated; // @synthesize cultureRelated=_cultureRelated;
@property(readonly, nonatomic, getter=isMealRelated) _Bool mealRelated; // @synthesize mealRelated=_mealRelated;
@property(readonly, nonatomic, getter=isMovieRelated) _Bool movieRelated; // @synthesize movieRelated=_movieRelated;
- (id)adjustedEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 isDateInSubject:(_Bool)arg3;
- (_Bool)isDateWithinRange:(id)arg1;
- (id)_mealClassificationTypeUsingStartDate:(id)arg1;
- (_Bool)_isAParentOf:(id)arg1;
- (double)_hasPriorityOverEventType:(id)arg1;
- (_Bool)questionMarkInString:(id)arg1;
- (id)dateWithoutTime:(id)arg1;
- (id)adjustedEventTitleForMessageUnits:(id)arg1 subject:(id)arg2 dateInSubject:(id)arg3 eventStartDate:(id)arg4 isGeneratedFromSubject:(_Bool *)arg5;
- (id)properCasedTitleForTitle:(id)arg1 locale:(id)arg2;
- (id)decoratedTitleFromTitle:(id)arg1 participantName:(id)arg2;
@property(readonly, nonatomic) _Bool prefersTitleSenderDecoration;
- (id)adjustedEventTitleForMessageUnits:(id)arg1;
- (id)adjustedEventClassificationTypeWithStartDate:(id)arg1;
- (void)_addUpperPriorityEventTypeIdentifier:(id)arg1 weight:(id)arg2;
- (void)_addParent:(id)arg1;
- (void)_addChild:(id)arg1;
- (id)description;
- (void)addEventPatterns:(id)arg1;
- (_Bool)allowGenericKeywordsForLanguage:(id)arg1;
- (id)initWithIdentifier:(id)arg1 language:(id)arg2 patternKeywords:(id)arg3 titleKeywords:(id)arg4 subjectKeywords:(id)arg5 defaultTitle:(id)arg6 titleSenderTemplate:(id)arg7 defaultStartingTimeHour:(int)arg8 defaultStartingTimeMinutes:(int)arg9 defaultDuration:(double)arg10 preferedMeridian:(unsigned long long)arg11 parent:(id)arg12 children:(id)arg13 useForTimeAdjustement:(_Bool)arg14 minutesBeforeDefaultStartingTime:(double)arg15 minutesAfterDefaultStartingTime:(double)arg16 allDayAllowed:(_Bool)arg17 useGenericPatternsInClassification:(_Bool)arg18 movieRelated:(_Bool)arg19 mealRelated:(_Bool)arg20 cultureRelated:(_Bool)arg21 sportRelated:(_Bool)arg22 fairlyGeneric:(_Bool)arg23 appointmentRelated:(_Bool)arg24;
- (id)init;

@end

