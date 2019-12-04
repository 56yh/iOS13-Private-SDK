//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIContextMenuInteraction, UIView;
@protocol VUIContextMenuTemplateControllerInterface;

__attribute__((visibility("hidden")))
@interface VUIActiveInteractionView : NSObject
{
    UIView *_highlightedView;
    UIContextMenuInteraction *_activeInteraction;
    id <VUIContextMenuTemplateControllerInterface> _templateInterface;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <VUIContextMenuTemplateControllerInterface> templateInterface; // @synthesize templateInterface=_templateInterface;
@property(nonatomic) __weak UIContextMenuInteraction *activeInteraction; // @synthesize activeInteraction=_activeInteraction;
@property(nonatomic) __weak UIView *highlightedView; // @synthesize highlightedView=_highlightedView;

@end

