//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray;
@protocol SXBlueprintMarker, SXComponent, SXComponentAnchor;

@protocol SXBlueprintMarker 
@property(retain, nonatomic) id <SXComponentAnchor> componentAnchor;
@property(readonly, nonatomic) NSArray *path;
@property(readonly, nonatomic) struct CGPoint approximateLocation;
@property(readonly, nonatomic) id <SXComponent> trailingComponent;
@property(readonly, nonatomic) id <SXComponent> leadingComponent;
- (_Bool)isEqualToMarker:(id <SXBlueprintMarker>)arg1;
@end
