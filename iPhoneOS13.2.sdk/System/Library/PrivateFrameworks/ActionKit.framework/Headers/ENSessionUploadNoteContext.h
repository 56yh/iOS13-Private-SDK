//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDAMNote, ENNoteRef, ENNoteStoreClient, ENNotebook;

@interface ENSessionUploadNoteContext : NSObject
{
    EDAMNote *_note;
    ENNoteRef *_refToReplace;
    ENNotebook *_notebook;
    long long _policy;
    id /* block */ _completion;
    id /* block */ _progress;
    ENNoteStoreClient *_noteStore;
    ENNoteRef *_noteRef;
}

@property(retain, nonatomic) ENNoteRef *noteRef; // @synthesize noteRef=_noteRef;
@property(retain, nonatomic) ENNoteStoreClient *noteStore; // @synthesize noteStore=_noteStore;
@property(copy, nonatomic) id /* block */ progress; // @synthesize progress=_progress;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(retain, nonatomic) ENNotebook *notebook; // @synthesize notebook=_notebook;
@property(retain, nonatomic) ENNoteRef *refToReplace; // @synthesize refToReplace=_refToReplace;
@property(retain, nonatomic) EDAMNote *note; // @synthesize note=_note;

@end

