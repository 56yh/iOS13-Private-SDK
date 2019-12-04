//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardKit/CRContent-Protocol.h>




@class NSArray, NSSet, NSString, SFCard;

@protocol CRCard <NSObject, NSSecureCoding, NSCopying, CRContent>
@property(readonly, nonatomic) unsigned long long cardFormat;
@property(readonly, copy, nonatomic) NSString *cardIdentifier;
@property(readonly, nonatomic) NSArray *dismissalCommands;
@property(readonly, nonatomic) NSSet *interactions;
@property(readonly, nonatomic) NSArray *cardSections;

@optional
@property(readonly, nonatomic) SFCard *backingCard;
@property(readonly, nonatomic) _Bool flexibleSectionOrder;
@property(readonly, nonatomic) _Bool asynchronous;
- (void)loadCardWithCompletion:(void (^)(id <CRCard>))arg1;
@end

