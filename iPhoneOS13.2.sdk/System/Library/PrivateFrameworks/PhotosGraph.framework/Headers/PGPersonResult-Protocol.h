//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDate, NSString;
@protocol PGPersonResult;

@protocol PGPersonResult 
+ (unsigned long long)type;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *contactIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *displayName;
- (long long)compareToPerson:(id <PGPersonResult>)arg1;
@end

