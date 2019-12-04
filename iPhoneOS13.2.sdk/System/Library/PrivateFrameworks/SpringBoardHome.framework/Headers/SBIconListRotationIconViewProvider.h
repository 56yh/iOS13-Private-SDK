//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconViewProviding-Protocol.h>

@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding>
{
    SBIconListView *_listView;
}

@property(readonly, nonatomic) __weak SBIconListView *listView; // @synthesize listView=_listView;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (_Bool)isIconViewRecycled:(id)arg1;
- (void)recycleIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)initWithListView:(id)arg1;

@end

