//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, UIKBKeyplaneTransformationContext, UIKBTree;

@protocol UIKeyboardKeyplaneTransformation 
+ (UIKBTree *)transformKeyplane:(UIKBTree *)arg1 withTransformationContext:(UIKBKeyplaneTransformationContext *)arg2;
+ (NSString *)transformationIdentifier;

@optional
+ (UIKBTree *)rollbackKeyplane:(UIKBTree *)arg1 withTransformationContext:(UIKBKeyplaneTransformationContext *)arg2;
@end

