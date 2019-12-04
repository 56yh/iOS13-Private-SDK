//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FMAccuracyOverlay, NSString, UIColor, UIImage;

@protocol FMAnnotation 
@property(retain, nonatomic) UIImage *smallOverlayIcon;
@property(retain, nonatomic) UIImage *largeOverlayIcon;
@property(retain, nonatomic) UIImage *smallAnnotationIcon;
@property(retain, nonatomic) UIImage *largeAnnotationIcon;
@property(retain, nonatomic) UIColor *tintColor;
@property(nonatomic) _Bool isBorderEnabled;
@property(nonatomic) double distanceFromUser;
@property(nonatomic) struct CLLocationCoordinate2D coordinate;
@property(nonatomic) double horizontalAccuracy;
@property(retain, nonatomic) FMAccuracyOverlay *overlay;
- (_Bool)isThisDevice;
- (_Bool)hasKnownLocation;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

