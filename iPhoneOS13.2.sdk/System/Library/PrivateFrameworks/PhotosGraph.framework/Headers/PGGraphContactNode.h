//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSString;

@interface PGGraphContactNode : PGGraphNode
{
    NSString *_contactIdentifier;
}

@property(readonly) NSDate *potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate;
- (unsigned long long)genderHintForGivenName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;

@end

