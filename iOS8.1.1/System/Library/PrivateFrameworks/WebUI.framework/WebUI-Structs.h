/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct OpaqueFormAutoFillFrame* OpaqueFormAutoFillFrameRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct _NSZone* NSZoneRef;

typedef struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
	BookmarkAndHistoryCompletionMatch m_ptr;
} RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>;

typedef struct _compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > {
	SuddenTerminationDisabler __first_;
} compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >;

typedef struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > {
	compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > __ptr_;
} unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >;

typedef struct duration<long long, std::__1::ratio<1, 1000000000> > {
	long long __rep_;
} duration<long long, std::__1::ratio<1, 1000000000> >;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > {
	duration<long long, std::__1::ratio<1, 1000000000> > __d_;
} time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >;

typedef struct duration<long long, std::__1::ratio<1, 1000> > {
	long long __rep_;
} duration<long long, std::__1::ratio<1, 1000> >;

typedef struct OpaqueJSScript* OpaqueJSScriptRef;

typedef struct __WBSFieldLabelPatternMatcherArray* WBSFieldLabelPatternMatcherArrayRef;

typedef struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > {
	KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> >;

typedef struct HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > > {
	HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > m_impl;
} HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >;

typedef struct Vector<int, 0, WTF::CrashOnOverflow> {
	int m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<int, 0, WTF::CrashOnOverflow>;

typedef struct Vector<double, 0, WTF::CrashOnOverflow> {
	double m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<double, 0, WTF::CrashOnOverflow>;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct _compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > {
	CoalescedAsynchronousWriter __first_;
} compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >;

typedef struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > {
	compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > __ptr_;
} unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >;

typedef struct CGImage* CGImageRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct _compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> > {
	URLCompletionDatabase __first_;
} compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> >;

typedef struct unique_ptr<SafariShared::URLCompletionDatabase, std::__1::default_delete<SafariShared::URLCompletionDatabase> > {
	compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> > __ptr_;
} unique_ptr<SafariShared::URLCompletionDatabase, std::__1::default_delete<SafariShared::URLCompletionDatabase> >;

typedef struct {
	unsigned short field1[27];
} SCD_Struct_WB27;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_WB28;

typedef struct {
	SCD_Struct_WB28 field1[32];
	unsigned long long field2;
} SCD_Struct_WB29;
