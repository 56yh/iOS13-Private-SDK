//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIAction, VUIDocumentDataSource;

__attribute__((visibility("hidden")))
@interface VUIEventDataSource : NSObject
{
    VUIDocumentDataSource *_preActionDocumentDataSource;
    VUIAction *_preAction;
    VUIDocumentDataSource *_documentDataSource;
    VUIAction *_action;
    VUIDocumentDataSource *_postActionDocumentDataSource;
    VUIAction *_postAction;
}

+ (id)_actionForKey:(id)arg1 eventDict:(id)arg2 viewElement:(id)arg3;
+ (id)_documentDataSourceWithDict:(id)arg1 viewElement:(id)arg2;
+ (id)eventDataSourceWithEventDict:(id)arg1 viewElement:(id)arg2;
@property(retain, nonatomic) VUIAction *postAction; // @synthesize postAction=_postAction;
@property(retain, nonatomic) VUIDocumentDataSource *postActionDocumentDataSource; // @synthesize postActionDocumentDataSource=_postActionDocumentDataSource;
@property(retain, nonatomic) VUIAction *action; // @synthesize action=_action;
@property(retain, nonatomic) VUIDocumentDataSource *documentDataSource; // @synthesize documentDataSource=_documentDataSource;
@property(retain, nonatomic) VUIAction *preAction; // @synthesize preAction=_preAction;
@property(retain, nonatomic) VUIDocumentDataSource *preActionDocumentDataSource; // @synthesize preActionDocumentDataSource=_preActionDocumentDataSource;

@end

