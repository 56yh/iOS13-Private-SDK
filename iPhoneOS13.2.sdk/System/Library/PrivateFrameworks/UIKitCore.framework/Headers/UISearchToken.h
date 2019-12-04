//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface UISearchToken : NSObject
{
    id _representedObject;
    NSString *_text;
    UIImage *_image;
}

+ (id)tokenWithIcon:(id)arg1 text:(id)arg2;
+ (id)tokenWithImage:(id)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)_initToken;

@end

