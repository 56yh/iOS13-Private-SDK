//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKLoupeAnnotationImageUpdaterHelper : NSObject
{
}

+ (struct CGAffineTransform)transformForFastPathLayer:(id)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)updateFastPathImageOnLoupeAnnotation:(id)arg1 withFastPathLayer:(id)arg2 onPageController:(id)arg3;
+ (void)updateModelImageOnLoupeAnnotation:(id)arg1 onPageController:(id)arg2;
+ (struct CGRect)unmagnifiedRectForMagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2;
+ (struct CGRect)magnifiedRectForUnmagnifiedRect:(struct CGRect)arg1 ofLoupeAnnotation:(id)arg2 onPageController:(id)arg3;

@end

