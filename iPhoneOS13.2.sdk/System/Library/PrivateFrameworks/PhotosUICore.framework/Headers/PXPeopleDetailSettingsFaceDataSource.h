//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDetailSettingsDataSource-Protocol.h>

@class NSString, PHFetchResult;

@interface PXPeopleDetailSettingsFaceDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;
    PHFetchResult *_faces;
}

@property(retain, nonatomic) PHFetchResult *faces; // @synthesize faces=_faces;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)modelObjectForIndex:(long long)arg1;
@property(readonly, nonatomic) long long action;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(id /* block */)arg3;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) _Bool hasMoreDetails;
- (id)initWithTitle:(id)arg1 faces:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

