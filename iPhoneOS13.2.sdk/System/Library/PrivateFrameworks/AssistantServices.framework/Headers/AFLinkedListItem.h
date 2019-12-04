//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AFLinkedListItem : NSObject
{
    id _object;
    AFLinkedListItem *_previousItem;
    AFLinkedListItem *_nextItem;
}

@property(retain, nonatomic) AFLinkedListItem *nextItem; // @synthesize nextItem=_nextItem;
@property(retain, nonatomic) AFLinkedListItem *previousItem; // @synthesize previousItem=_previousItem;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void)removeFromList;
- (void)insertAfterItem:(id)arg1;
- (void)insertBeforeItem:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

