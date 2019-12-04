//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel
{
    NSString *_fullName;
    NSString *_abbreviation;
    UIImage *_profileImage;
    _Bool _isLocked;
}

+ (id)lockedEntry;
@property(readonly, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property(readonly, nonatomic) NSString *abbreviation; // @synthesize abbreviation=_abbreviation;
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)initWithFullName:(id)arg1 abbreviation:(id)arg2 profileImage:(id)arg3;

@end

