//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIImage;

@interface NUWelcomeToNewsViewStyle : NSObject
{
    UIImage *_appIconImage;
    NSAttributedString *_titleAttributedString;
    NSAttributedString *_descriptionAttributedString;
}

@property(readonly, copy, nonatomic) NSAttributedString *descriptionAttributedString; // @synthesize descriptionAttributedString=_descriptionAttributedString;
@property(readonly, copy, nonatomic) NSAttributedString *titleAttributedString; // @synthesize titleAttributedString=_titleAttributedString;
@property(readonly, nonatomic) UIImage *appIconImage; // @synthesize appIconImage=_appIconImage;
- (id)createDescriptionAttributedString;
- (id)createTitleAttributedString;
- (id)init;

@end

