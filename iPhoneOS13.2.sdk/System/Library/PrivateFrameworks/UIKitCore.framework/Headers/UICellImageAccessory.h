//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICellAccessory.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UICellImageAccessory : UICellAccessory
{
    UIImage *_image;
}

@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)view;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

