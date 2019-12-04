//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload
{
    NSArray *_whitelistDestinations;
    NSArray *_destinationsWithPasswords;
    NSArray *_titlesAndDescriptions;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *titlesAndDescriptions; // @synthesize titlesAndDescriptions=_titlesAndDescriptions;
@property(retain, nonatomic) NSArray *destinationsWithPasswords; // @synthesize destinationsWithPasswords=_destinationsWithPasswords;
@property(retain, nonatomic) NSArray *whitelistDestinations; // @synthesize whitelistDestinations=_whitelistDestinations;
- (id)description;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

