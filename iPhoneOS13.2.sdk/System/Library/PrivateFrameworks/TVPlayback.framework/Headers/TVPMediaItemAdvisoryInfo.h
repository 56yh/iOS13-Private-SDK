//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject
{
    NSString *_ratingName;
    NSString *_ratingDescription;
}

@property(readonly, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(retain, nonatomic) NSString *ratingName; // @synthesize ratingName=_ratingName;
- (id)description;
- (id)initWithRatingDescription:(id)arg1;

@end

