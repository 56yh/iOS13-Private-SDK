//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDate, NSSet, NSString;

@protocol PGSuggestion 
@property(readonly, nonatomic) unsigned char notificationQuality;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property(readonly, nonatomic) id recipe;
@property(readonly, nonatomic) NSSet *features;
@property(readonly, nonatomic) NSArray *representativeAssets;
@property(readonly, nonatomic) NSArray *keyAssets;
@property(readonly, nonatomic) long long version;
@property(readonly, nonatomic) unsigned short notificationState;
@property(readonly, nonatomic) unsigned short state;
@property(readonly, nonatomic) unsigned short subtype;
@property(readonly, nonatomic) unsigned short type;

@optional
@property(readonly, copy, nonatomic) NSArray *reasons;
@property(readonly, nonatomic) _Bool isInvalid;
@end

