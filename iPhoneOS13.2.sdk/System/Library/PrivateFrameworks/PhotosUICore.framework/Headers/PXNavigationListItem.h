//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXNavigationListItem-Protocol.h>

@class NSString, PHCollection;

@interface PXNavigationListItem : NSObject <PXNavigationListItem>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_accessoryTitle;
    long long _itemCount;
}

@property(readonly, nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNavigationListItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *visualDescription;
@property(readonly, nonatomic) id representedObject;
@property(readonly, nonatomic) PHCollection *collection;
@property(readonly, nonatomic) long long indentationLevel;
@property(readonly, nonatomic, getter=isExpanded) _Bool expanded;
@property(readonly, nonatomic, getter=isGroup) _Bool group;
@property(readonly, nonatomic, getter=isExpandable) _Bool expandable;
@property(readonly, nonatomic, getter=isRenamable) _Bool renamable;
@property(readonly, nonatomic, getter=isRemovable) _Bool removable;
@property(readonly, nonatomic, getter=isDraggable) _Bool draggable;
@property(readonly, nonatomic) NSString *glyphImageName;
@property(readonly, nonatomic) NSString *accessoryTitle; // @synthesize accessoryTitle=_accessoryTitle;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

