//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIFont;

@interface AKFontListController : NSObject
{
    NSArray *_fonts;
    UIFont *_defaultFont;
}

+ (id)attributedStringForFont:(id)arg1;
@property(retain) UIFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property(retain) NSArray *fonts; // @synthesize fonts=_fonts;
- (id)_createFontsList;
- (id)initWithController:(id)arg1;

@end

