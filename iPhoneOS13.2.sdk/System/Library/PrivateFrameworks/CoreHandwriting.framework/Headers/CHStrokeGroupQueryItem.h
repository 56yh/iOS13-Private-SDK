//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLocale, NSNumber;

@interface CHStrokeGroupQueryItem : NSObject
{
    NSNumber *_strokeGroupIdentifier;
    NSNumber *_strokeGroupStableIdentifier;
    NSArray *_strokeIdentifiers;
    long long _strokeGroupType;
    NSLocale *_preferredLocale;
    NSDictionary *__tokenizedTextResultsByLocale;
    NSDictionary *__errorsByLocale;
}

+ (id)descriptionForStrokeGroupQueryItemType:(long long)arg1;
@property(readonly, copy, nonatomic) NSDictionary *_errorsByLocale; // @synthesize _errorsByLocale=__errorsByLocale;
@property(readonly, copy, nonatomic) NSDictionary *_tokenizedTextResultsByLocale; // @synthesize _tokenizedTextResultsByLocale=__tokenizedTextResultsByLocale;
@property(readonly, copy, nonatomic) NSLocale *preferredLocale; // @synthesize preferredLocale=_preferredLocale;
@property(readonly, nonatomic) long long strokeGroupType; // @synthesize strokeGroupType=_strokeGroupType;
@property(readonly, copy, nonatomic) NSArray *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
@property(readonly, nonatomic) NSNumber *strokeGroupStableIdentifier; // @synthesize strokeGroupStableIdentifier=_strokeGroupStableIdentifier;
@property(readonly, nonatomic) NSNumber *strokeGroupIdentifier; // @synthesize strokeGroupIdentifier=_strokeGroupIdentifier;
- (id)description;
- (void)dealloc;
- (id)textRecognitionResultForLocale:(id)arg1 error:(id *)arg2;
- (id)initWithStrokeGroupIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 type:(long long)arg4 preferredLocale:(id)arg5 tokenizedTextResultsByLocale:(id)arg6 errorsByLocale:(id)arg7;

@end

