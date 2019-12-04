//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKImageProvider.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationImageProvider : CLKImageProvider
{
    double _borderWidth;
    double _fontSize;
    UIImage *_profileImage;
    NSString *_fullName;
    NSString *_nameAbbreviation;
}

@property(retain, nonatomic) NSString *nameAbbreviation; // @synthesize nameAbbreviation=_nameAbbreviation;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property double fontSize; // @synthesize fontSize=_fontSize;
@property double borderWidth; // @synthesize borderWidth=_borderWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

