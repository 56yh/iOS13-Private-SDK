//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class SASTTemplatePercentageRating, SAUIDecoratedText;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>
{
}

+ (id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieRatingReviewItem;
@property(retain, nonatomic) SASTTemplatePercentageRating *templatePercentageRating;
@property(retain, nonatomic) SAUIDecoratedText *reviews;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

